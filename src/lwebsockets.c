#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include "libwebsockets.h"

static const struct luaL_Reg websockets_f [] = {
  {NULL,NULL}
};

static const struct luaL_Reg websockets_m [] = {
  {NULL,NULL}
};

int luaopen_websockets(lua_State *L) {
  luaL_newmetatable(L,"ws.meta");
  lua_pushvalue(L, -1);
  lua_setfield(L, -2, "__index");
  luaL_register(L, NULL, websockets_m);
  luaL_register(L, "websockets", websockets_f);
  return 1;
}
