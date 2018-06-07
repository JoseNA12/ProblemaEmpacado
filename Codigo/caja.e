note
	description: "Summary description for {CAJA}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAJA -- [G->OBJETO]

create
	make

feature -- Initialization

	make (pId, pTamanio: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
		end

feature -- Access
	identificador: INTEGER
	tamanio: INTEGER

	default_identificador: INTEGER
		once
			Result := 1001
		end


end
