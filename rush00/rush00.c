
void rush1(int x, int y){

	int j;
	int p;
	p =0;
	j =0;

	if (y>1){
		while(p<(y-2)){
			ft_putchar('\n');
			ft_putchar('|');
				while(j<(x-2)){
					ft_putchar(' ');
					j++;
			}

			if (x>1){
				ft_putchar('|');
				p++;
			}
		}
	}

}

void rush2 (int x,int y){

	int j;

	j =0;

	if(x>0 && y>1){
			ft_putchar('\n');
			ft_putchar('o');
		while(j<(x-2)){

				ft_putchar('=');
				++j;
		}
			if(x >1){
				ft_putchar('o');
			}


	}

	if(x>0 &&y>0)
		ft_putchar('\n');
}
void rush3 (int x, int y){

	int j;
	j = 0;
	if(x>0 && y>0){
		ft_putchar('o');
		while(j<(x-2) && y>0){
			ft_putchar('=');
			++j;

			}
	}
			if (x>0 && y>1)
				ft_putchar('o');


			rush1(x,y);
			rush2(x,y);
}


