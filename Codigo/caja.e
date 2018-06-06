note
	description: "Summary description for {CAJA}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CAJA

create
	make

feature {NONE} -- Initialization

	make (pId, pTamanio: INTEGER)
		do
			identificador := pId
			tamanio := pTamanio
		end

feature {CAJA} -- Access
	identificador: INTEGER
	tamanio: INTEGER

end
