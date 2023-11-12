#!/usr/bin/python3

from .engine.file_storage import FileStorage
"""
module that links file storage
"""

storage = FileStorage()
storage.reload()
