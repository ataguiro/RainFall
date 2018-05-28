edx = 0
a = {
    init,
    finit
}

def store(a1, a2):
    *a1 = &a
    a1[104] = a2
    return a1

def setAnnotation(a1, str):
    return memcpy(a1 + 4, str, strlen(str)) # We can overflow the stack, and overwrite ret

def main(argc, argv):
    global edx
    if argc <= 1:
        exit(1)
    n1 = new(108)
    store(n1, 5)
    n2 = new(108)
    store(n2, 6)
    setAnnotation(n1, argv[4])
    ret = **n2
    edx = ret
    ret(n2, n1) # Vulnerable call
    return n2

def init(a1, a2):
    return a2[104] + a1[104]

def finit(a1, a2):
    return a1[104] - a2[104]

if __name__ == '__main__':
    import sys
    exit(main(len(sys.argv), sys.argv))
