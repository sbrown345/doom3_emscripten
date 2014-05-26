// doom3_emscripten.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "..\idlib\\precompiled.h"

int main(int argc, const char **argv) {
	printf("hi\n");
	////Posix_EarlyInit( );

	if ( argc > 1 ) {
		common->Init( argc-1, &argv[1], NULL );
	} else {
		common->Init( 0, NULL, NULL );
	}

	////Posix_LateInit( );

	//while (1) {
	//	common->Frame();
	//}
}