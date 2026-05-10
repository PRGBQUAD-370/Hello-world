import ctypes
import time
import random
import os

user32 = ctypes.windll.user32
kernel32 = ctypes.windll.kernel32

# Hide console window
SW_HIDE = 0
console = kernel32.GetConsoleWindow()
if console:
    user32.ShowWindow(console, SW_HIDE)

# MessageBox constants
MB_OK = 0x0
MB_ICONINFORMATION = 0x40

# Warning message box
resp = user32.MessageBoxW(
    0,
    "Hello World.",
    "python hello world",
    MB_OK | MB_ICONINFORMATION
)