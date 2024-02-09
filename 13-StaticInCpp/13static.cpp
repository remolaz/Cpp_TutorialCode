//
//  static.cpp
//  13-StaticInCpp
//
//  Created by Remo Lazazzera on 23/01/2020.
//  Copyright © 2020 Remo Lazazzera. All rights reserved.
//

#include <stdio.h>

static int s_Variable_1 = 1;
// the s_Variable_1 variable is gonna be LINKED internally only inside this translation unit. The LINKER is not gonna see this in the global scope

int Variable_2 = 2;

int Variable_3 = 3;

void Function()
{
}

static void static_Function()
{
}

