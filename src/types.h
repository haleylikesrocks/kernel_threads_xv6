typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

//tick lock structure def
typedef struct {
    int ticket; //ticket being served
    int turn;
    // struct proc *proc;
} lock_t;