#include <stdio.h>

int _mxf(int a, int b) {
	for (a = 2;a < 14;a++) {
		int _nq = b;
		b = (b % b);
		b = (b | 49665);
		b = (b - _nq);
	}
	for (b = 3;b > 2;b--) {
		int _hv = a;
		int _hi = a;
		a = (a % _hv);
		a = _hv;
		_hv = _hi;
	}
	printf("%d\n", a);
	return a;
}

int _cvb(int a, int b) {
	printf("%d\n", b);
	b = (a % 10239);
	a = (a & 3019);
	return b;
}

int main() {
	int _ja = 54161;
	printf("%d\n", _ja);
	for (_ja = 12;_ja > 1;_ja--) {
		int _hm = 302;
		int _wu = 2720;
		int _bc = 14139;
		_hm = _wu;
		printf("%d\n", _bc);
		_wu = (_hm ^ _hm);
	}
	for (_ja = 7;_ja > 2;_ja--) {
		int _md = 26377;
		int _co = _md;
		int _xq = _cvb(47152, 51770);
		int _na = _co;
		_md = (_co + _xq);
		_co = (_md ^ 29257);
		_xq = _na;
	}
	return 0;
}

