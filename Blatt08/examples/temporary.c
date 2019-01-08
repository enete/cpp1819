typedef struct{ int foo[3]; } bar;

bar baz() {
	return (bar){0};
}

int main() {
	baz().foo[1] = 42;
}
