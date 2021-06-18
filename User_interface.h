#ifndef CLI_H
#define CLI_H

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <iomanip>
#include <ctime>
#include "Stock.h"

using namespace std;

//forward declaration
class Stock;

string get_date();
string get_time();
void set_console_size(int w, int h);
void set_console_position(int x, int y);
void set_font_size(int a, int b);
void display_category(int n);
void display_categories();
void display_supply_type();
void display_staff_positions();
void display_error(string error);
void display_help(string error);
void display_stock_table(vector <Stock>& stock);
void transaction_bill(vector <Stock> stock, string cashier, string date, string time);
void to_upper(string& input, bool to_upper);

#endif
