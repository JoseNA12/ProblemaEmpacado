note
	description: "Summary description for {GRUPO_CAJAS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GRUPO_CAJAS [G->CAJA]

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			create grupo.make
		end

feature -- Access
    cantidad_objetos_actuales : INTEGER
    	do
    		Result := grupo.count
    	end

feature {NONE} -- Implementation
    grupo : LINKED_LIST[G]
        -- se implementa como una lista enlazada de objetos clase G

feature -- Element change
    extend(e:G)
    do
    	grupo.extend(e)
    end

end
