note
	description: "Summary description for {OBJETO}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBJETO

create
	make

feature {NONE} -- Initialization

	make (pId, pTamanio: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
		end

feature {OBJETO} -- Access
	identificador: INTEGER
	tamanio: INTEGER

end
