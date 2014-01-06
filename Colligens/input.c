int main() { 

#ifdef A 
	int x = 2 ;
#else 
	int y = 3 ;
#endif 

	int r
#ifdef A
	 = 3
#else
	 = 4
#endif
	 ;

	call (
#ifdef A
			30
#else
			40
#endif
		);

	if (x != 10){
		int g =
#ifdef A
		2
#else
		3
#endif
		;
	}



// TypeChef transforms this code..
#ifdef A
	if (x != 0){
#else
	if (x != 1){
#endif
		x = 10;
	}

	// TypeChef transforms this code..
	#ifdef A
		int w = 3
	#else
		int w = 4
	#endif
		 ;

		// TypeChef transforms this code..
		int
	#ifdef A
		w = 3;
	#else
		w = 4;
	#endif

}

	// TypeChef transforms this code..
void
#ifdef A
	test1
#else
	test2
#endif
	(){

	// testing..

}
