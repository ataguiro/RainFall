class Pown
{
	;
};

Pown *Pown::func (Pown *this, int n)
{
	Pown *ret;

	*this = addr;
	ret = this;
	*(this + 26) = n;
	return ret;
}

void *Pown::setAnnotation (Pown *this, char *s)
{
	return memcpy((char *)this[1], s, strlen(n));
}

int main(int ac, char **av)
{
	Pown *n1, *n2, *n3;

	if (ac < 1)
		exit(1);
	n1 = (Pown *) new(108);
	Pown::func(n1, 5);
	n2 = n1;
	n3 = (Pown *) new(108);
	Pown::func(n3, 6);
	Pown::setAnnotation(n2, av[1]);
	return n3(); // vuln
}
