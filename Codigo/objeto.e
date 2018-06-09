note
	description: "Summary description for {OBJETO}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBJETO

create
	make

feature -- Initialization

	make (pId, pTamanio: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
		end

feature {NONE} -- Access
	identificador: INTEGER
	tamanio: INTEGER

feature -- Access
	get_identificador: INTEGER
		do
			Result := identificador
		end

	get_tamanio: INTEGER
		do
			Result := tamanio
		end

end
