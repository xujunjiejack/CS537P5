//
// Created by junjie on 4/19/17.
//

#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(){

    long i = 0;
    for (i = 0; i< 10000; i++){
        printf(1, "xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix\n"
                "Version 6 (v6).  xv6 loosely follows the structure and style of v6,\n"
                "but is implemented for a modern x86-based multiprocessor using ANSI C.\n"
                "\n"
                "ACKNOWLEDGMENTS\n"
                "\n"
                "xv6 is inspired by John Lions's Commentary on UNIX 6th Edition (Peer\n"
                "to Peer Communications; ISBN: 1-57398-013-7; 1st edition (June 14,\n"
                "2000)). See also http://pdos.csail.mit.edu/6.828/2007/v6.html, which\n"
                "provides pointers to on-line resources for v6.\n"
                "\n"
                "xv6 borrows code from the following sources:\n"
                "    JOS (asm.h, elf.h, mmu.h, bootasm.S, ide.c, console.c, and others)\n"
                "    Plan 9 (bootother.S, mp.h, mp.c, lapic.c)\n"
                "    FreeBSD (ioapic.c)\n"
                "    NetBSD (console.c)\n"
                "\n"
                "The following people made contributions:\n"
                "    Russ Cox (context switching, locking)\n"
                "    Cliff Frey (MP)\n"
                "    Xiao Yu (MP)\n"
                "    Nickolai Zeldovich\n"
                "    Austin Clements\n"
                "\n"
                "In addition, we are grateful for the patches contributed by Greg\n"
                "Price, Yandong Mao, and Hitoshi Mitake.\n"
                "\n"
                "The code in the files that constitute xv6 is\n"
                "Copyright 2006-2007 Frans Kaashoek, Robert Morris, and Russ Cox.\n"
                "\n"
                "ERROR REPORTS\n"
                "\n"
                "If you spot errors or have suggestions for improvement, please send\n"
                "email to Frans Kaashoek and Robert Morris (kaashoek,rtm@csail.mit.edu). \n"
                "\n"
                "BUILDING AND RUNNING XV6\n"
                "\n"
                "To build xv6 on an x86 ELF machine (like Linux or FreeBSD), run \"make\".\n"
                "On non-x86 or non-ELF machines (like OS X, even on x86), you will\n"
                "need to install a cross-compiler gcc suite capable of producing x86 ELF\n"
                "binaries.  See http://pdos.csail.mit.edu/6.828/2007/tools.html.\n"
                "Then run \"make TOOLPREFIX=i386-jos-elf-\".\n"
                "\n"
                "To run xv6, you can use Bochs or QEMU, both PC simulators.\n"
                "Bochs makes debugging easier, but QEMU is much faster. \n"
                "To run in Bochs, run \"make bochs\" and then type \"c\" at the bochs prompt.\n"
                "To run in QEMU, run \"make qemu\".");
    }

    exit();
    return 0;
}