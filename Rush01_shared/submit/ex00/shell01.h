#ifndef SHELL01_h_
#define SHELL01_h_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int size;
int **grid;  // 盤面
int *clues; // 外周のヒント（上・下・左・右）
int *seen;

int ft_strlen(char *str);
void init_seen();
void input_to_clues(char *str);
int is_valid_placement(int row, int col, int num);
void print_grid();
int count_visible_buildings_up(int col);
int count_visible_buildings_down(int col);
int count_visible_buildings_left(int row);
int count_visible_buildings_right(int row);

int solve(int row, int col);

#endif