# Minishell2

### Introduction

Le Minishell2 est la continuité du module Shell Programming, c'est une version améliorée du Minishell1.



### Fonctionnalités supplémentaires

Vous trouverez ci-dessous les fonctionnalités supplémentaires qu'embarque le Minishell2 en plus des fonctionnalités du Minishell1:

* Gestion de l'opérateur ";" qui permet de séparer différentes commandes pour les executer à la suite.
* Gestion de l'opérateur "|" qui permet de rediriger la sortie standard d'une commande vers l'entrée standard de la suivante.
* Gestion des opérateurs "<" "<<" ">>" ">" qui permettent de rediriger l'entrée ou la sortie standard d'une application vers un fichier



### Pipe

L'implémentation des pipes était la tâche la plus complexe du projet. Un pipe permet de faire communiquer deux processus entre eux de manière asynchrome. Une bonne maitrise des pipes était donc essentielle afin de pouvoir les implémenter proprement, de plus la possibilité qu'il puisses y avoir plusieurs pipes dans une seule commande était un véritable défis.



### Exemples

Vous trouverez ci-dessous quelques exemple d'utilisation du Minishell2:

```
∼/B-PSU-210> ./mysh
> ls -l; ls -l | wc -l
total 4
drwxr-xr-x 2 johan johan 4096 Mar 17 16:28 tata
-rw-r–r– 1 johan johan 0 Mar 17 16:28 toto
3
>
```

```
∼/B-PSU-210> ./mysh
> mkdir test ; cd test ; ls -a ; ls | cat | wc -c > tutu ; cat tutu
. ..
5
>
```
