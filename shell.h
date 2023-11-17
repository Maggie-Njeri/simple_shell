#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

void display_prompt(void);
void mc_fprint(char *scrivo);
void leggere_domande(char *domande, size_t size);
void execute_domande(const char *domande);
int main(void);

#endif
