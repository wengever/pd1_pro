#include <stdio.h>
#include "pD.h"

int arr[10][20][20][20]; // 10 個 3-D 陣列
int main() {
	int q;
	scanf("%d", &q); // 總操作次數
	while(q--) {
		int opt;
		scanf("%d", &opt);
		if( opt == 1 ) { // 操作 1
			int id, x, y, z, val;
			scanf("%d %d %d %d %d", &id, &x, &y, &z, &val);
			modify(arr[id], &id, x, y, z, val);
			printf("%d\n", id);
		}
		else if( opt == 2 ) { // 操作 2
			int id1, id2;
			scanf("%d %d", &id1, &id2);
			exchange(arr[id1], arr[id2]);
		}
		else if( opt == 3 ) { // 操作 3
			int id, x, y, z;
			scanf("%d %d %d %d", &id, &x, &y, &z);
			int ans = get_value(arr, id, x, y, z);
			printf("%d\n", ans);
		}
	}
	
	return 0;
}