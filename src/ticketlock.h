//tick lock structure def
typedef struct {
    int ticket; //ticket being served
    int turn;
    // struct proc *proc;
} lock_t;