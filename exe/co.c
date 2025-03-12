#include <stdio.h>
int main(){
    //multiplicable or not check
    /*
    n == j ? multiplicable : not multiplicable  
    */
	int n,m, j,k;
	scanf("%d %d", &n, &m); //2 2
	scanf("%d %d", &j, &k); //2 2
    if(m==j){
    int a[n][m], b[j][k], c[n][k];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]); 
		}
	} 

	for(int i=0; i<j; i++){
		for(int j=0; j<k; j++){
			scanf("%d", &b[i][j]); 
		}
	} 
	//i<2   j<2; 
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
            c[i][j] = 0;
			for(int k=0; k<m; k++){
                c[i][j] += (a[i][k] * b[k][j]); 
            }

		}
	}

    for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			printf("%d ", c[i][j]);
		}
	}
    }else{
        printf("It is not multiplicable. ");
    }
	
	return 0; 
}