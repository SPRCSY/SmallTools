import win32api
import win32con
import win32gui
import random
from ctypes import *
import time

def mouse_dclick():
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP, 0, 0, 0, 0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP, 0, 0, 0, 0)

activate = input()
if activate == 'e':
    for _ in range(100):
        mouse_dclick()
        time.sleep(random.randrange(8,15))