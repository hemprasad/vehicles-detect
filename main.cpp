#include "vehicles313.h"

void print(){

	printf("Usage:  project -[parameter]\n");
	printf("-[filename] : path of file to be calculate...\n");
}

int main(int argc,char* argv[]){

	char* file;

	if(argc!=2){
		print();
	}
	else{
	
		file = argv[1]+1;
	}

	algorithm(file);
	return 1;
}