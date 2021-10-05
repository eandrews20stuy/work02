#include <stdio.h>

int main() {

	unsigned int my_line = 4;
	char atlantic_avenue = 65;
	char nevins_street = 78;
	char borough_hall = 98;
	char bowling_green = 'Green';
	char wall = 'S';
	char fulton = 't';
	char brooklyn_bridge = 'e';
	int union_sq = 14;
	float grand_central = 42.04567;
	long fifty_ninth = 2995902997643227;
	double eighty_sixth = 86.86456103104;
	double harlem_east = 124.6015887887678;
	unsigned long the_terrible_twos = 32767;
	printf("If I were to go from Brooklyn to the Bronx,\n");
	printf("I would take the %d train, ",my_line);
	printf("and get on at %ctlantic %cvenue.\n",atlantic_avenue,atlantic_avenue);
	printf("The stops that I would pass are:\n%cevins Street\n%corough hall\nBowling %creen\nWall %ctreet\nFul%con S%cree%c\nBrooklyn Bridg%c\n%dth Street-Union Square\nGrand Central-%0.0fnd Street\n59th Street\n\t(with a random number assigned of %ld)\n%lfth Street\n\t(that was an unnecessary decimal)\nand %0.0lfth Street.\nI would get out at:\n138th St-Grand Concourse.\n\nFor some reason while making this program I thought of the powers of two,\nso here is 2^15 minus one:\n%ld\n\nGoodbye!\n",nevins_street,borough_hall,bowling_green,wall,fulton,fulton,fulton,brooklyn_bridge,union_sq,grand_central,fifty_ninth,eighty_sixth,harlem_east,the_terrible_twos);
	return 0;

}

