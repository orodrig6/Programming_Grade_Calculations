#define _CRT_SECURE_NO_WARNINGS //remove this line if you are not using visual studio to compile this program. This allows us to use printf on visual studio.
#include <direct.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	FILE *fin,*fout;
	float var;

	int A_grades = 0,Aminus_grades=0,Bplus_grades=0, B_grades = 0,Bminus_grades=0,Cplus_grades=0, C_grades = 0, Cminus_grades=0, Dplus_grades=0, D_grades=0, Dminus_grades=0, F_grades = 0;
	fin = fopen("in.dat", "r");
	fout = fopen("out.dat", "w");
	//perror("Error");//was used for figuring out why my file wouldn't open (wrong directory)
	while (fscanf(fin, "%f", &var) != EOF) {
	//	printf("%.1f\n\n", var); //uncomment this if you want to make see each grade on the command prompt. 
		if ((var >= 94) && (var <= 100)) { //multiple if statements to check which letter does each grade receive. Then keeps track of how many As,Bs,C-... 
			A_grades++;
			fprintf(fout, "%.1f\tA\n",var); //writes the same grade to out.dat along with its corresponding grade
		}
		else if ((var >= 90) && (var < 94)) {
			Aminus_grades++;
			fprintf(fout, "%.1f\tA-\n", var);
		}
		else if ((var >= 86) && (var < 90)) {
			Bplus_grades++;
			fprintf(fout, "%.1f\tB+\n", var);
		}
		else if ((var >= 82) && (var < 86)) {
			B_grades++;
			fprintf(fout, "%.1f\tB\n", var);
		}
		else if ((var >= 78) && (var < 82)) {
			Bminus_grades++;
			fprintf(fout, "%.1f\tB-\n", var);
		}
		else if ((var >= 74) && (var < 78)) {
			Cplus_grades++;
			fprintf(fout, "%.1f\tC+\n", var);
		}
		else if ((var >= 70) && (var < 74)) {
			C_grades++;
			fprintf(fout, "%.1f\tC\n", var);
		}
		else if ((var >= 66) && (var < 70)) {
			Cminus_grades++;
			fprintf(fout, "%.1f\tC-\n", var);
		}
		else if ((var >= 62) && (var < 66)) {
			Dplus_grades++;
			fprintf(fout, "%.1f\tD+\n", var);
		}
		else if ((var >= 58) && (var < 62)) {
			D_grades++;
			fprintf(fout, "%.1f\tD\n", var);
		}
		else if ((var >= 54) && (var < 58)) {
			Dminus_grades++;
			fprintf(fout, "%.1f\tD-\n", var);
		}
		else {
			F_grades++;
			fprintf(fout, "%.1f\tF\n", var);
		}
	 
	}
	fprintf(fout, "%d students earned an A\n", A_grades); //prints how many 
	fprintf(fout, "%d students earned an A-\n", Aminus_grades);
	fprintf(fout, "%d students earned a B+\n", Bplus_grades);
	fprintf(fout, "%d students earned a B\n", B_grades);
	fprintf(fout, "%d students earned a B-\n", Bminus_grades);
	fprintf(fout, "%d students earned a C+\n", Cplus_grades);
	fprintf(fout, "%d students earned a C\n", C_grades);
	fprintf(fout, "%d students earned a C-\n", Cminus_grades);
	fprintf(fout, "%d students earned a D+\n", Dplus_grades);
	fprintf(fout, "%d students earned a D\n", D_grades);
	fprintf(fout, "%d students earned a D-\n", Dminus_grades);
	fprintf(fout, "%d students earned an F\n", F_grades);

	fclose(fin); //close input and output files, and we're done! check out.dat to make sure everything is good. 
	fclose(fout);
}