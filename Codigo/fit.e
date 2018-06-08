note
	description: "Summary description for {FIT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIT

create
	make

feature -- Initialization
	make(pTamanio_cajas: INTEGER; pSecuencia_objetos: LINKED_LIST[OBJETO])
		do
			tamanio_cajas := pTamanio_cajas
			secuencia_objetos := pSecuencia_objetos
			set_id_caja(default_identificador)
			create array_cajas.make
		end

feature -- Access
	id_actual_caja: INTEGER

	tamanio_cajas: INTEGER
	secuencia_objetos: LINKED_LIST[OBJETO] --lista generada de objetos recibida

	array_cajas: LINKED_LIST[CAJA] --contendrá la solución

	default_identificador: INTEGER
		once
			Result := 1001
		end

feature -- Implementation
	crear_caja: CAJA
		local
			nueva_caja: CAJA
		do
			create nueva_caja.make(id_actual_caja, tamanio_cajas)
			set_id_caja(id_actual_caja + 1) -- en cada creacion aumentar el id en 1
			RESULT := nueva_caja
		end

feature {NONE} -- Element change
	set_id_caja(pId: INTEGER)
		require
			id_mayor_al_actual: pId > id_actual_caja
		do
			id_actual_caja := pId
		ensure
			id_actual_caja > old id_actual_caja
		end

end
