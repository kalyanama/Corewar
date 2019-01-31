#include "corewar_vm.h"

void op_st(t_env *vm, t_process *pointer)
{
	if (set_arg_types(vm, pointer) == false)
		return(step_over(pointer));
	get_args(vm, pointer, true);
	if (is_registry_id(ARG[0]))
	{
		if (ARG_TYPE[1] == T_REG && is_registry_id(ARG[1]))
			REG[IDX(ARG[1])] = REG[IDX(ARG[0])];
		else if (ARG_TYPE[1] == T_IND)
		{
			ADDR = ARG[1] % IDX_MOD;
			write_to_arena(vm, pointer, REG[IDX(ARG[0])]);
		}
	}
}