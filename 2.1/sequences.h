#define PAWHIGH 130
#define PAWLOW 6
#define PAWTOUCH 20

#define LIDHIGH 100
#define LIDLOW 6
#define LIDPEEK 46

int reac1count = 1;
ServoMove reac1[] = {
  {LIDHIGH, 300}
};

int reac2count = 3;
ServoMove reac2[] = {
  {LIDPEEK, 750},
  {LIDPEEK, 750},
  {LIDHIGH, 750}
};

int act1count = 3;
ServoMove act1[] = {
  {PAWLOW, 1000},
  {PAWLOW, 250},
  {PAWLOW, 250}
};

int act2count = 4;
ServoMove act2[] = {
  {PAWTOUCH, 1000},
  {PAWTOUCH, 750},
  {PAWLOW, 50},
  {PAWLOW, 500}
};

int reset1count = 2;
ServoMove reset1paw[] = {
  {PAWHIGH, 300},
  {PAWHIGH, 300}
};
ServoMove reset1lid[] = {
  {LIDHIGH, 300},
  {LIDLOW, 300}
};

int reset2count = 4;
ServoMove reset2paw[] = {
  {PAWHIGH, 1000},
  {PAWHIGH, 1000},
  {PAWHIGH, 1000},
  {PAWHIGH, 750}
};
ServoMove reset2lid[] = {
  {LIDHIGH, 1000},
  {LIDPEEK, 1000},
  {LIDPEEK, 1000},
  {LIDLOW, 750}
};

int peek1count = 4;
ServoMove peek1[] = {
  {LIDLOW, 1000},
  {LIDPEEK, 500},
  {LIDPEEK, 750},
  {LIDLOW, 1000}
};

int peek2count = 7;
ServoMove peek2[] = {
  {LIDLOW, 1000},
  {LIDPEEK, 500},
  {LIDPEEK, 250},
  {LIDLOW, 1000},
  {LIDPEEK, 150},
  {LIDPEEK, 750},
  {LIDLOW, 150}
};
