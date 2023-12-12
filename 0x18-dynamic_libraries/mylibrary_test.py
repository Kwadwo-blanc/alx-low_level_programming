from ctypes import CDLL
mylibrary = CDLL('./100-operations.so')
mylibrary.hello_from_c()
