#include "g_local.h"

extern void     trap_CmdArgv( int arg, char *valbuff, int sizebuff );

void            ClientKill();

qboolean 	ClientCommand()
{
	char            cmd_command[1024];

	self = PROG_TO_EDICT( g_globalvars.self );
	trap_CmdArgv( 0, cmd_command, sizeof( cmd_command ) );

	if ( !strcmp( cmd_command, "kill" ) )
	{
		ClientKill();
		return true;
	}
	//G_Printf("ClientCommand %s\n",cmd_command);
	return false;
}
