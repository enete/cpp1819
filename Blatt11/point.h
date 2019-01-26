#ifndef point_INC
#define point_INC

//Klasse point_t 
typedef struct point_t
{
	double a;
	double b;

}point_t;

//Kontruktor
//Memberfunktion
double point_length(point_t* this);

//Statische Funktion
point_t point_diff(point_t* a, point_t* b);
double point_dist(point_t* a, point_t* b);

#endif
