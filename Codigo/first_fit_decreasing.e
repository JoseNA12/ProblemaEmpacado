note
	description: "Summary description for {FIRST_FIT_DECREASING}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRST_FIT_DECREASING

inherit
	FIRST_FIT

create
	make_ffd

feature -- Initialization

	make_ffd(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			make_ff(pTamanio_cajas, ordenar_secuencia_objetos(pSecuencia_objetos)) --FIRST_FIT

		end

feature -- Implementation
	ordenar_secuencia_objetos(pSecuencia: LINKED_LIST[OBJETO]): LINKED_LIST[OBJETO]
		local
			tempVar, i, j: INTEGER
		do


			Result := pSecuencia
		end


feature -- Access

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
