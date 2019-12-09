# Notion d'entrées / Sorties

## Types et tailles

| Types | Tailles |
|--|--|
| `int` | 4 octets |
| `unsigned int` | 4 octets |
| `short int` | 2 octets |
| `long int` | 8 octets |
| `float` | 4 octets |
| `double` | 8 octets |
| `char` | 1 octets |

## Entrées du clavier

    `scanf("%type",  &variable);`
**type**
`%i`,`%u`,`%d` pour les entier
`%f`,`%e`,`%g` pour les réel
`%c` pour un caractère

    `scanf("%s", variable);`
Pour les chaines de caractère
**Attention**, ne prend pas en charge les espaces
 
     `gets(variable);`
 
 ## Sorties sur l'écran
 
     `printf("%type", variable);`
