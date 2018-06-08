note
	description: "Summary description for {FIRST_FIT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRST_FIT

inherit
	FIT

create
	make_ff

feature -- Initialization

	make_ff(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			make(pTamanio_cajas, pSecuencia_objetos) --FIT
		end

feature -- Access

feature -- Element change

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
