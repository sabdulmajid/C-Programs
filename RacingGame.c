#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};
struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};
// Print functions section
char printIntro() {
  printf("Welcome to our main event digital race fans! I hope everybody has their snacks because we are about to begin!\n");
};
char printCountDown() {
  printf("Racers Ready! In...\n");
  printf("5\n");
  printf("4\n");
  printf("3\n");
  printf("2\n");
  printf("1\n");
  printf("Race!\n");
};

char printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %d. \nFirst Place Is: %s in the %s race car!", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

char printCongratulation(struct RaceCar raceCar) {
  printf("Let's all congratulate %s in the %s race car for an amazing performance. It truly was a great race and everybody have a goodnight!", raceCar.driverName, raceCar.raceCarColor);
};

// Logic functions section
int calculateTimeToCompleteLap(void) {
  
};

int main() {
	srand(time(0));
  printIntro();
  printCountDown();
};