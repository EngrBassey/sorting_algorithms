#!/usr/bin/python3
""""
file storage module
"""
import json
from models.base_model import BaseModel
from models.user import User
from models.state import State
from models.amenity import Amenity
from models.city import City
from models.place import Place
from models.review import Review

class FileStorage:
    __file_path = "file.json"
    __objects = {}

    def all(self):
        return FileStorage.__objects
    
    def new(self, obj):
        FileStorage.__objects["{}.{}".format(obj.__class__.__name__, obj.id)] = obj
    
    def save(self):
        serialized = {
            key: val.to_dict()
            for key, val in self.__objects.items()
        }
        with open(FileStorage.__file_path, "w") as f:
            f.write(json.dumps(serialized))
            
    def reload(self):
        try:
            load_obj = {}
            with open(FileStorage.__file_path, "r") as fa:
                load_obj = json.loads(fa.read())
            
            FileStorage.__objects = {
                key:
                    eval(value["__class__"])(**value)
                    for key, value in load_obj.items()
            }

        except FileNotFoundError:
            pass
