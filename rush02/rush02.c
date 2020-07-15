/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:18:24 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/15 11:21:38 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void rush1(int x, int y){

	int j;
	int p;
	p =0;
	j =0;

	if (y>1){
		while(p<(y-2)){
			ft_putchar('\n');
			ft_putchar('B');
				while(j<(x-2)){
					ft_putchar('B');
					j++;
			}

			if (x>1){
				ft_putchar('B');
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
			ft_putchar('A');
		while(j<(x-2)){

				ft_putchar('B');
				++j;
		}
			if(x >1){
				ft_putchar('A');
			}


	}

	if(x>0 &&y>0)
		ft_putchar('\n');
}
void rush3 (int x, int y){

	int j;
	j = 0;
	if(x>0 && y>0){
		ft_putchar('C');
		while(j<(x-2) && y>0){
			ft_putchar('B');
			++j;

			}
	}
			if (x>0 && y>1)
				ft_putchar('C');


			rush1(x,y);
			rush2(x,y);
}



