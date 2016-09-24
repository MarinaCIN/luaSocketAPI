#ifndef LS_LUAAPI
#define LS_LUAAPI

/*CLIBRARIES*/
#include <stdio.h>
#include <errno.h>
#include "luaAPI.h"
#include <sys/socket.h>
#include <netinet/in.h>
/************/

/*MARCOS*/
#define MAX_MSG_SIZE 5
#define MAX_PORT_SIZE 65535
/********/

/*EXTERNAL LIBRARIES*/
#include "lua/lua.h"
#include "lua/lualib.h"
#include "lua/lauxlib.h"
/*********************/

/*INTERNAL LIBRARIES*/
#include "lsAuxLib.h"
/********************/

/*ENUM AND TYPES*/
enum name
{
	LS_PROTO_NONE = 0, LS_PROTO_TCP, LS_PROTO_UDP, LS_PROTO_TOKEN
};
/****************/

/*EXTRUTURED TYPES*/
/******************/

/*GLOBAL VARIABLES*/
static lua_State *LCS; //Lua Client State
/******************/

/*GLOBAL FUNCTIONS*/
lua_State* get_lua_State();
void ls_init();
void ls_close();
LS_Bool ls_run(char *lclient);
/******************/

/*LOCAL FUNCTIONS*/
static int socket_open();
static int socket_close();
static int socket_connect();
/*****************/


#endif