/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 11:25
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255

int main() {
    char chaineIni[TAILLEMAX];
    int i;
    int nomCara;
    int compteur;

    do {
        compteur = 0;
        gets(chaineIni);
        nomCara = strlen(chaineIni);
        for (i = 0; i < nomCara; i++) {
            if ((chaineIni[i] > 90 || chaineIni[i] < 65)&&(chaineIni[i] > 57 || chaineIni[i] < 48) && chaineIni[i] != 32) {
                compteur++;
            }
        }
    } while (compteur != 0);

    for (i = 0; i < nomCara; i++) {
        if (chaineIni[i] == 'A') {
            printf(".- ");
        } else {
            if (chaineIni[i] == 'B') {
                printf("-... ");
            } else {
                if (chaineIni[i] == 'C') {
                    printf("-.-. ");
                } else {
                    if (chaineIni[i] == 'D') {
                        printf("-.. ");
                    } else {
                        if (chaineIni[i] == 'E') {
                            printf(". ");
                        } else {
                            if (chaineIni[i] == 'F') {
                                printf("..-. ");
                            } else {
                                if (chaineIni[i] == 'G') {
                                    printf("--. ");
                                } else {
                                    if (chaineIni[i] == 'H') {
                                        printf(".... ");
                                    } else {
                                        if (chaineIni[i] == 'I') {
                                            printf(".. ");
                                        } else {
                                            if (chaineIni[i] == 'J') {
                                                printf(".--- ");
                                            } else {
                                                if (chaineIni[i] == 'K') {
                                                    printf("-.- ");
                                                } else {
                                                    if (chaineIni[i] == 'L') {
                                                        printf(".-.. ");
                                                    } else {
                                                        if (chaineIni[i] == 'M') {
                                                            printf("-- ");
                                                        } else {
                                                            if (chaineIni[i] == 'N') {
                                                                printf("-. ");
                                                            } else {
                                                                if (chaineIni[i] == 'O') {
                                                                    printf("--- ");
                                                                } else {
                                                                    if (chaineIni[i] == 'P') {
                                                                        printf(".--. ");
                                                                    } else {
                                                                        if (chaineIni[i] == 'Q') {
                                                                            printf("--.- ");
                                                                        } else {
                                                                            if (chaineIni[i] == 'R') {
                                                                                printf(".-. ");
                                                                            } else {
                                                                                if (chaineIni[i] == 'S') {
                                                                                    printf("... ");
                                                                                } else {
                                                                                    if (chaineIni[i] == 'T') {
                                                                                        printf("- ");
                                                                                    } else {
                                                                                        if (chaineIni[i] == 'U') {
                                                                                            printf("..- ");
                                                                                        } else {
                                                                                            if (chaineIni[i] == 'V') {
                                                                                                printf("...-");
                                                                                            } else {
                                                                                                if (chaineIni[i] == 'W') {
                                                                                                    printf(".--");
                                                                                                } else {
                                                                                                    if (chaineIni[i] == 'X') {
                                                                                                        printf("-..-");
                                                                                                    } else {
                                                                                                        if (chaineIni[i] == 'Y') {
                                                                                                            printf("-.--");
                                                                                                        } else {
                                                                                                            if (chaineIni[i] == 'Z') {
                                                                                                                printf("--..");
                                                                                                            } else {
                                                                                                                if (chaineIni[i] == '1') {
                                                                                                                    printf(".----");
                                                                                                                } else {
                                                                                                                    if (chaineIni[i] == '2') {
                                                                                                                        printf("..---");
                                                                                                                    } else {
                                                                                                                        if (chaineIni[i] == '3') {
                                                                                                                            printf("...--");
                                                                                                                        } else {
                                                                                                                            if (chaineIni[i] == '4') {
                                                                                                                                printf("....-");
                                                                                                                            } else {
                                                                                                                                if (chaineIni[i] == '5') {
                                                                                                                                    printf(".....");
                                                                                                                                } else {
                                                                                                                                    if (chaineIni[i] == '6') {
                                                                                                                                        printf("-....");
                                                                                                                                    } else {
                                                                                                                                        if (chaineIni[i] == '7') {
                                                                                                                                            printf("--...");
                                                                                                                                        } else {
                                                                                                                                            if (chaineIni[i] == '8') {
                                                                                                                                                printf("---..");
                                                                                                                                            } else {
                                                                                                                                                if (chaineIni[i] == '9') {
                                                                                                                                                    printf("----.");
                                                                                                                                                } else {
                                                                                                                                                    if (chaineIni[i] == '0') {
                                                                                                                                                        printf("-----");
                                                                                                                                                    } else {
                                                                                                                                                        if (chaineIni[i] == ' ') {
                                                                                                                                                            printf("   ");
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    }
    return (0);
}

