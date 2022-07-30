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

char printCongratulation(struct Race race) {
  printf("Let's all congratulate %s in the %s race car for an amazing performance. It truly was a great race and everybody have a goodnight!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
};

// Logic functions section
int calculateTimeToCompleteLap(void) {
  int speed, acceleration, nerves;
  speed = (rand() % 3 + 1);
  acceleration = (rand() % 3 + 1);
  nerves = (rand() % 3 + 1);
  return (speed + acceleration + nerves);
};

void updateRaceCar(struct RaceCar* raceCar) {
  raceCar -> totalLapTime = calculateTimeToCompleteLap(); 
};

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  if (raceCar1 -> totalLapTime <= raceCar2 -> totalLapTime) {
    race -> firstPlaceDriverName = raceCar1 -> driverName;
    race -> firstPlaceRaceCarColor = raceCar1 -> raceCarColor;
  } else {
      race -> firstPlaceDriverName = raceCar2 -> driverName;
      race -> firstPlaceRaceCarColor = raceCar2 -> raceCarColor;
  }
};

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  struct Race race = {5, 1, "", ""};
  for (int i = 0; i <= race.numberOfLaps; i++) {
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
  };
  printCongratulation(race);
};

int main() {
	srand(time(0));
  printIntro();
  printCountDown();
};