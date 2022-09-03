#ifndef ABSO
#define ABSO

#define ABS(X) (((X) < (0)) ? (-(X)) : (X))

/*
 * You can define this way too
 * #define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))
 */

#endif /* ABSO(X) */
