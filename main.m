//
//  mr-main.m
//  mr
//
//  Created by Julien Palmas on 05/01/11.
//  Copyright 2011 Crux Consulting. All rights reserved.
//

#import <MacRuby/MacRuby.h>

int main(int argc, char *argv[])
{
    return macruby_main("rb_main.rb", argc, argv);
}
