# --------------------- Global Variables ---------------------

g1 = 0 # edx
g2 = {
    '0': _ZN1NplERS_,
    '1': _ZN1NmiERS_
} # 0x8048848

# ------------------------ Functions -------------------------

# Address range: 0x8048540 - 0x804856f
def _start(a1, a2):
    return __libc_start_main(main, v1, &a1, __libc_csu_init, __libc_csu_fini, g1)

# Address range: 0x80485f4 - 0x8048699
def main(argc, argv):
    global g1
    # 0x80485f4
    if argc <= 1:
        # 0x8048604
        _exit(1)
        # branch -> 0x8048610
    v1 = _Znwj(108) # 0x8048617
    _ZN1NC1Ei(v1, 5)
    result = _Znwj(108) # 0x8048639
    _ZN1NC1Ei(result, 6)
    _ZN1N13setAnnotationEPc(v1, argv[4])
    v2 = **result # 0x8048682
    g1 = v2
    v2(result, v1)
    return result

# Address range: 0x80486f6 - 0x804870d
# From class:    N
# Type:          constructor
# Demangled:     N::N(int)
def _ZN1NC1Ei(result, a2):
    # 0x80486f6
    *result = &g2
    result[104] = a2
    return result

# Address range: 0x804870e - 0x8048739
# Demangled:     N::setAnnotation(char *)
def _ZN1N13setAnnotationEPc(a1, str):
    # 0x804870e
    return memcpy(a1 + 4, str, strlen(str))

# Address range: 0x804873a - 0x804874d
# From class:    N
# Type:          virtual member function
# Demangled:     N::operator+(N &)
def _ZN1NplERS_(a1, a2):
    # 0x804873a
    return a2[104] + a1[104]

# Address range: 0x804874e - 0x804876f
# From class:    N
# Type:          virtual member function
# Demangled:     N::operator-(N &)
def _ZN1NmiERS_(a1, a2):
    # 0x804874e
    return a1[104] - a2[104]

# Address range: 0x8048770 - 0x80487d0
def __libc_csu_init(a1, a2, a3):
    # 0x8048770
    abort()
    # UNREACHABLE

# Address range: 0x80487e0 - 0x80487e1
def __libc_csu_fini():
    # 0x80487e0
    return

# --------------- Dynamically Linked Functions ---------------

# int __libc_start_main(int *(main)(int, char **, char **), int argc, char ** ubp_av, void(* init)(void), void(* fini)(void), void(* rtld_fini)(void), void(* stack_end));
# void _exit(int status);
# void * _Znwj(unsigned int size);
# void * memcpy(void * restrict dest, const void * restrict src, size_t n);
# size_t strlen(const char * s);

# --------------------- Meta-Information ---------------------

# Detected compiler/packer: gcc (i686-redhat-linux-gcc) (4.6.3)
# Detected language: C++
# Detected functions: 8
# Decompiler release: v2.2.1 (2016-09-07)
# Decompilation date: 2018-05-28 16:48:31

# ----------------------- Entry Point ------------------------

if __name__ == '__main__':
    import sys
    sys.exit(main(len(sys.argv), sys.argv))
