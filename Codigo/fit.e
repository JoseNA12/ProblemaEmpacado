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
			create lista_cajas.make
		end

feature -- Access
	id_actual_caja: INTEGER

	tamanio_cajas: INTEGER
	secuencia_objetos: LINKED_LIST[OBJETO] --lista generada de objetos recibida

	lista_cajas: LINKED_LIST[CAJA] --contendrá la solución

	default_identificador: INTEGER
		once
			Result := 1001
		end

	get_cajas_size: INTEGER
		do
			Result := lista_cajas.count
		end

	-- obtener una caja de lista_cajas
	get_caja(pos: INTEGER): CAJA
		do
			Result := lista_cajas.i_th(pos)
		end

	-- obtener el espacio restante de una caja de lista_cajas
	get_tamanio_caja(pos: INTEGER): INTEGER
		do
			Result := lista_cajas.i_th(pos).get_tamanio
		end

	get_espacio_disp_caja(pos: INTEGER): INTEGER
		do
			Result := lista_cajas.i_th(pos).espacio_disponible
		end

	get_secue_obj_size: INTEGER
		do
			Result := secuencia_objetos.count
		end

	-- obtener la lista de objetos generados
	get_secue_obj: LINKED_LIST[OBJETO]
		do
			Result := secuencia_objetos
		end

	-- obtener un objeto de secuencia_objetos
	get_obj_secue(pos: INTEGER): OBJETO
		do
			Result := secuencia_objetos.i_th(pos)
		end

	-- obtener el tamaño de un objeto almacenado en secuencia_objetos
	get_tamanio_obj_secue(pos: INTEGER): INTEGER
		do
			Result := secuencia_objetos.i_th(pos).get_tamanio
		end

	print_cajas
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > lista_cajas.count
			loop
				print("[")
				print_objetos_caja(lista_cajas.i_th(i))
				print("], ")
				io.new_line

				i := i + 1
			end
		end

	print_objetos_caja(pCaja: CAJA)
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > pCaja.get_objetos_size
			loop
				--print("(id:")
				--print(pCaja.get_objeto(i).get_identificador)
				--print(", ")
				--print("tam:")
				print(pCaja.get_objeto(i).get_tamanio)
				print(", ")
				i := i + 1
			end
		end

	print_secuencia
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > secuencia_objetos.count
			loop
				print(secuencia_objetos.i_th(i))
				print(", ")

				i := i + 1
			end
		end

feature -- Implementation
	-- crear una caja y añadirla a lista_cajas
	crear_caja
		local
			nueva_caja: CAJA
		do
			create nueva_caja.make(id_actual_caja, tamanio_cajas, tamanio_cajas)
			lista_cajas.extend(nueva_caja)
			set_id_caja(id_actual_caja + 1) -- en cada creacion aumentar el id en 1
		end

	-- agregar a una caja de lista_cajas, un objeto de secuencia_objetos
	agregar_obj_a_caja(pos_caja, pos_obj: INTEGER)
		require
			pos_caja > -1
			pos_obj > -1
		do
			get_caja(pos_caja).agregar_objeto(get_obj_secue(pos_obj))
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
