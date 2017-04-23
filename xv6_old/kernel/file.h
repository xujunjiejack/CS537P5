#ifndef _FILE_H_
#define _FILE_H_
struct file {
  enum { FD_NONE, FD_PIPE, FD_INODE } type;
  int ref; // reference count
  char readable;
  char writable;
  struct pipe *pipe;
  struct inode *ip;
  uint off;
};


// in-core file system types

//Start your xv6 modifications by changing the filesystem's inode structure.
// Each 4-byte block pointer in the addrs array should be accompanied by a
// 4-byte checksum of the data contained in the pointed-to block.
// You do not need to checksum the contents of the indirect block,
// so you should use a dedicated member of the inode structure to
// store the pointer to it alone (without a checksum) instead of storing it in the addrs array as xv6 does in its unmodified form.


struct inode {
  uint dev;           // Device number
  uint inum;          // Inode number
  int ref;            // Reference count
  int flags;          // I_BUSY, I_VALID

  short type;         // copy of disk inode
  short major;
  short minor;
  short nlink;
  uint size;
//  uint addrs[NDIRECT + 1];
  uint addrs[12];

  // addr1, addr2, addr3,
  // addr1, checksum1, addr2, checksum2......

  uint indirect_block;
};

#define I_BUSY 0x1
#define I_VALID 0x2


// device implementations

struct devsw {
  int (*read)(struct inode*, char*, int);
  int (*write)(struct inode*, char*, int);
};

extern struct devsw devsw[];

#define CONSOLE 1

#endif // _FILE_H_
