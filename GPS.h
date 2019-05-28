//Define
#define NUMBER_OF_STRINGS 15
#define NUMBER_OF_CHARACTERS 20
//Global Variables
//uint8_t temporal;
double latitude, longitude;
char GPS_Flag;
char commaCounter;
char positionCounter;
char individual [NUMBER_OF_STRINGS][NUMBER_OF_CHARACTERS];
//Methods
void divideStringByComma(char ArrayOfArrays[NUMBER_OF_STRINGS][NUMBER_OF_CHARACTERS]);

double getNMEACoordinates(char word[20], char multiplier[20]);

void delay(int miliseconds);

void initializeGPS();

void GPS();