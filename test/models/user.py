#!/usr/bin/python3
""""
module that inherits BaseModel
"""
from models.base_model import BaseModel

class User(BaseModel):
    """function that inherits base_module"""
    email = ""
    password = ""
    first_name = ""
    last_name = ""
