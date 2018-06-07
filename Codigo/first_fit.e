note
	description: "Summary description for {FIRST_FIT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRST_FIT

create
	make

feature -- Initialization

	make (pArrayObjetos: LINKED_LIST[OBJETO])
		do
			create array_cajas.make
			set_secuencia_objetos(pArrayObjetos)
		end

feature -- Access
	secuencia_objetos: LINKED_LIST[OBJETO] --lista generada de objetos recibida
	array_cajas: LINKED_LIST[CAJA] --contendrá la solución

feature  -- Element change
	set_secuencia_objetos(secuencia: LINKED_LIST[OBJETO])
		require
			lista_no_vacia: secuencia.count > 0
		do
			secuencia_objetos := secuencia
		end

	crear_caja
		local
			caja: CAJA
		do
			create caja.make(1, 2)
			array_cajas.extend(caja)

		end

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
