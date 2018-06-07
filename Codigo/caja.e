note
	description: "Summary description for {CAJA}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAJA

create
	make

feature -- Initialization

	make (pId, pTamanio: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
			create array_objetos.make

		end

feature -- Access
	identificador: INTEGER
	tamanio: INTEGER

	array_objetos: LINKED_LIST[OBJETO]

	default_identificador: INTEGER
		once
			Result := 1001
		end


end
