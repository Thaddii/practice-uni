#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(int argc, char const *argv[])
{
    double x;
    int i;
    float sin_von_x;
    float cos_von_x;
    int sin_indent;
    int cos_indent;

    // Intervall -180 Grad bis 180 Grad in 15er Schritten
    for(x = -180.0; x <= 180.0; x += 15.0) {
        // sin(x / 180.0 * M_PI);
        // Sinus Wert für x ausrechenen inkl. Umrechnung von x in Radians, da sin() von der Einheit Radian ausgeht
        // sin() liefert einen Wert zwischen -1 und 1
        sin_von_x = sin(x * (M_PI / 180.0));
        cos_von_x = cos(x * (M_PI / 180.0));

        // Multipliziert mit 10 um den Wertebereich auf die Plotterzeilen abzubilden
        sin_indent = sin_von_x * 10;
        cos_indent = cos_von_x * 10;

        // Wert um 10 erhöt (Wertebereich von -10 bis 10 auf 0 bis 20 verschoben)
        sin_indent += 10;
        cos_indent += 10;

        // Plotterzeile 21 Zeichen lang
        for(i = 0; i <= 20; i++) {
            if(i == sin_indent && i == cos_indent) {
                putchar('*');
            } else if(i == sin_indent) {
                putchar('+');
            } else if(i == cos_indent) {
                putchar('x');
            } else putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
